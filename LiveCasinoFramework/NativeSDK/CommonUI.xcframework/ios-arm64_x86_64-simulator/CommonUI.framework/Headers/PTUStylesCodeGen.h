//
//  PTUStylesCodeGen.h
//  Lobby
//
//  Created by hlpa on 2/20/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

@import Tools;

#import "PTUStylesTypes.h"
#import "PTUStyle.h"

#define PTUStyleConcatInner(a, b) a ## b
#define PTUStyleConcat(a, b) PTUStyleConcatInner(a, b)

#define PTUStylePropertyOrContent_Inline info
#define PTUStylePropertyOrContent_Property properties
#define PTUStylePropertyOrContent_Content content

#define PTUStylePropertyOrContentDict_Inline configDictionary
#define PTUStylePropertyOrContentDict_Property properties
#define PTUStylePropertyOrContentDict_Content content

#define PTUStyleCheckInline_Inline(x) x
#define PTUStyleCheckInline_Property(x)
#define PTUStyleCheckInline_Content(x)

#define PTUStyleCheckProperty_Inline(x)
#define PTUStyleCheckProperty_Property(x) x
#define PTUStyleCheckProperty_Content(x)

#define PTUStyleCheckContent_Inline(x)
#define PTUStyleCheckContent_Property(x)
#define PTUStyleCheckContent_Content(x) x

#define PTUStyleVariableLower_ARC(x) [ x value ]
#define PTUStyleVariableLower_NSNumber_BOOL(x) [ [ x value ] boolValue ]
#define PTUStyleVariableLower_NSNumber_UInt(x) [ [ x value ] unsignedIntegerValue ]
#define PTUStyleVariableLower_NSNumber_float(x) [ [ x value ] floatValue ]
#define PTUStyleVariableLower_NSNumber_CGFloat(x) [ [ x value ] cgFloatValue ]

#define PTUStyleVariableRaise_ARC(x) x
#define PTUStyleVariableRaise_NSNumber_BOOL(x) [ NSNumber numberWithBool: x ]
#define PTUStyleVariableRaise_NSNumber_UInt(x) [ NSNumber numberWithUnsignedInteger: x ]
#define PTUStyleVariableRaise_NSNumber_float(x) [ NSNumber numberWithFloat: x ]
#define PTUStyleVariableRaise_NSNumber_CGFloat(x) [ NSNumber numberWithCGFloat: x ]

#define PTUStyleVariableLowerDict_ARC(x) x
#define PTUStyleVariableLowerDict_NSNumber_BOOL(x) [ x boolValue ]
#define PTUStyleVariableLowerDict_NSNumber_float(x) [ x floatValue ]
#define PTUStyleVariableLowerDict_NSNumber_UInt(x) [ x unsignedIntegerValue ]
#define PTUStyleVariableLowerDict_NSNumber_CGFloat(x) [ x cgFloatValue ]

#define PTUStylePropertyStorage_ARC strong
#define PTUStylePropertyStorage_NSNumber_BOOL assign
#define PTUStylePropertyStorage_NSNumber_float assign
#define PTUStylePropertyStorage_NSNumber_UInt assign
#define PTUStylePropertyStorage_NSNumber_CGFloat assign

#define PTUStylePropertyNullability_ARC nullable,
#define PTUStylePropertyNullability_NSNumber_BOOL
#define PTUStylePropertyNullability_NSNumber_float
#define PTUStylePropertyNullability_NSNumber_UInt
#define PTUStylePropertyNullability_NSNumber_CGFloat

#define PTUStyleAssertRequired_Required(variable, type_constant, string_name, inline_property_content) \
if ( ( variable == nil ) && ( parent == nil ) ) \
{ \
    NSLog(@"Style object[%@] type[%@] name[%@] location[%@] Missing required property for style", self, table->descriptions[type_constant].parseName, @#string_name, @#inline_property_content); \
    NSAssert(NO, nil); \
}
#define PTUStyleAssertRequired_Optional(variable, type_constant, string_name, inline_property_content)

#define PTUStyleAssertRequiredDict_Required(variable, type_constant, string_name, inline_property_content) \
if ( variable == nil ) \
{ \
    NSLog(@"Style object[%@] dictionary[%@] type[%@] name[%@] location[%@] Missing required property for style", self, configDictionary, table->descriptions[type_constant].parseName, @#string_name, @#inline_property_content); \
    NSAssert(NO, nil); \
}
#define PTUStyleAssertRequiredDict_Optional(variable, type_constant, string_name, inline_property_content)

#define PTUStylePropertyDefinition_CheckEntryIsKnown_Inline(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
ok |= ( (parseKeyResultType == type_constant) && [parseKeyResultName isEqualToString: @#string_name] && (PTUStyleCheckInline_ ## inline_property_content (!) NO) );

#define PTUStylePropertyDefinition_CheckEntryIsKnown_Property(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
ok |= ( (parseKeyResultType == type_constant) && [parseKeyResultName isEqualToString: @#string_name] && (PTUStyleCheckProperty_ ## inline_property_content (!) NO) );

#define PTUStylePropertyDefinition_CheckEntryIsKnown_Content(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
ok |= ( (parseKeyResultType == type_constant) && [parseKeyResultName isEqualToString: @#string_name] && (PTUStyleCheckContent_ ## inline_property_content (!) NO) );

#define PTUStylePropertyDefinition_GetProperties(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
PTUStylesProperty * const PTUStyleConcat(variable_name, _id) = [ PTUStylePropertyOrContent_ ## inline_property_content propertyOrNilOfType: type_constant withName:@#string_name table:table]; \
PTUStyleAssertRequired_ ## required_optional ( PTUStyleConcat(variable_name, _id), type_constant, string_name, inline_property_content)

#define PTUStylePropertyDefinition_GetPropertiesFromDict(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
NSString *PTUStyleConcat(variable_name, _parseName); \
if (type_constant < table->count) \
{ \
    PTUStyleConcat(variable_name, _parseName) = table->descriptions[type_constant].parseName; \
} \
else \
{ \
    PTUStyleConcat(variable_name, _parseName) = nil; \
    NSLog(@"Style object object[%@] type[%lu] name[%@] location[%@] Unknown type", self, type_constant, @#string_name, @#inline_property_content); \
    NSAssert(NO, nil); \
} \
id const PTUStyleConcat(variable_name, _ns) = [ PTUStylePropertyOrContentDict_ ## inline_property_content objectForKey: [[ PTUStyleConcat(variable_name, _parseName) stringByAppendingString: @":" ] stringByAppendingString: @#string_name ] ]; \
PTUStyleAssertRequiredDict_ ## required_optional ( PTUStyleConcat(variable_name, _ns), type_constant, string_name, inline_property_content)

#define PTUStylePropertyDefinition_PropertiesDictToStyle(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
PTUStyleTypeDescription const * _Nonnull PTUStyleConcat(variable_name, _typeDescription); \
if (type_constant < table->count) \
{ \
    PTUStyleConcat(variable_name, _typeDescription) = table->descriptions + type_constant; \
} \
else \
{ \
    PTUStyleConcat(variable_name, _typeDescription) = NULL; \
    NSLog(@"Style object object[%@] variableName[%@] class[%@] type[%lu] name[%@] location[%@] Unknown type", self, @#variable_name, @#type, type_constant, @#string_name, @#inline_property_content); \
    NSAssert(NO, nil); \
} \
id const PTUStyleConcat(variable_name, _id) = PTUStyleConcat(variable_name, _ns) == nil ? nil : PTUStyleParseObject( PTUStyleConcat(variable_name, _ns), nil, PTUStyleConcat(variable_name, _typeDescription), table ); \
PTUStyleAssertRequiredDict_ ## required_optional ( PTUStyleConcat(variable_name, _id), type_constant, string_name, inline_property_content)

#define PTUStylePropertyDefinition_CheckNil(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
( PTUStyleConcat(variable_name, _id) != nil) ||

#define PTUStylePropertyDefinition_CheckInline(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) PTUStyleCheckInline_ ## inline_property_content ( YES || )
#define PTUStylePropertyDefinition_CheckProperty(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) PTUStyleCheckProperty_ ## inline_property_content ( YES || )
#define PTUStylePropertyDefinition_CheckContent(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) PTUStyleCheckContent_ ## inline_property_content ( YES || )

#define PTUStylePropertyDefinition_DictAssembleInline(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
PTUStyleCheckInline_ ## inline_property_content ( PTUStylePropertyDefinition_DictAssemble(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) )

#define PTUStylePropertyDefinition_DictAssembleProperty(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
PTUStyleCheckProperty_ ## inline_property_content ( PTUStylePropertyDefinition_DictAssemble(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) )

#define PTUStylePropertyDefinition_DictAssembleContent(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
PTUStyleCheckContent_ ## inline_property_content ( PTUStylePropertyDefinition_DictAssemble(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) )

#define PTUStylePropertyDefinition_DictAssemble(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
if (type_constant < table->count) \
{ \
    PTUStylePropertyDefinition_DictAssemble_ ## assign_method (type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
} \
else \
{ \
    NSLog(@"Style object object[%@] type[%lu] name[%@] location[%@] Unknown type", self, type_constant, @#string_name, @#inline_property_content); \
    NSAssert(NO, nil); \
}

#define PTUStylePropertyDefinition_DictAssemble_ARC(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
if (self. variable_name != nil) \
{ \
    [dict setObject: PTUStyleUnParseObject(PTUStyleVariableRaise_ ## assign_method (self. variable_name ), table->descriptions + type_constant, table ) forKey: [[ table->descriptions[type_constant].parseName stringByAppendingString: @":"] stringByAppendingString: @#string_name ] ]; \
}

#define PTUStylePropertyDefinition_DictAssemble_NSNumber_BOOL(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
[dict setObject: PTUStyleUnParseObject(PTUStyleVariableRaise_ ## assign_method (self. variable_name ), table->descriptions + type_constant, table ) forKey: [[ table->descriptions[type_constant].parseName stringByAppendingString: @":"] stringByAppendingString: @#string_name ] ];

#define PTUStylePropertyDefinition_DictAssemble_NSNumber_UInt(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
[dict setObject: PTUStyleUnParseObject(PTUStyleVariableRaise_ ## assign_method (self. variable_name ), table->descriptions + type_constant, table ) forKey: [[ table->descriptions[type_constant].parseName stringByAppendingString: @":"] stringByAppendingString: @#string_name ] ];

#define PTUStylePropertyDefinition_DictAssemble_NSNumber_float(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
[dict setObject: PTUStyleUnParseObject(PTUStyleVariableRaise_ ## assign_method (self. variable_name ), table->descriptions + type_constant, table ) forKey: [[ table->descriptions[type_constant].parseName stringByAppendingString: @":"] stringByAppendingString: @#string_name ] ];

#define PTUStylePropertyDefinition_DictAssemble_NSNumber_CGFloat(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
[dict setObject: PTUStyleUnParseObject(PTUStyleVariableRaise_ ## assign_method (self. variable_name ), table->descriptions + type_constant, table ) forKey: [[ table->descriptions[type_constant].parseName stringByAppendingString: @":"] stringByAppendingString: @#string_name ] ];

#define PTUStylePropertyDefinition_Init(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
variable_name : PTUStyleConcat(variable_name, _id) ?  PTUStyleConcat(PTUStyleVariableLower_ , assign_method) ( PTUStyleConcat(variable_name, _id) ) : parent. variable_name

#define PTUStylePropertyDefinition_InitDict(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
variable_name : PTUStyleConcat(PTUStyleVariableLowerDict_ , assign_method) ( PTUStyleConcat(variable_name, _id) )

#define PTUStylePropertyDefinition_InitDefinition(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
variable_name : ( type ) variable_name

#define PTUStylePropertyDefinition_InitAssignments(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
_ ## variable_name = variable_name ;

#define PTUStylePropertyDefinition_DefineProperty(type, variable_name, type_constant, string_name, assign_method, required_optional, inline_property_content) \
@property ( PTUStylePropertyStorage_ ## assign_method, nonatomic, PTUStylePropertyNullability_ ## assign_method  readonly ) type variable_name ;

#define PTUStyleInitWith(property_definitions) \
self = [self PTUStyleConcat(initWith_, property_definitions)]

#define CheckPropertiesWhenDebug_1(definition, inlineDict, propertiesDict, contentDict) \
[inlineDict enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) \
{ \
    PTUStyleParseKeyResult const parseKeyResult = PTUStyleParseKey(key, table); \
    PTUStylePropertyType const parseKeyResultType = parseKeyResult.type; \
    NSString * const parseKeyResultName = parseKeyResult.name; \
    if ( ! ( (parseKeyResultType == PTUStylePropertyType_Style) && ([parseKeyResultName isEqual: @"properties"] || [parseKeyResultName isEqual: @"content"]) ) ) \
    { \
        BOOL ok = NO; \
        definition(CheckEntryIsKnown_Inline) \
        if (!ok) \
        { \
            NSLog(@"Style info object[%@] dictionary[%@] key[%@] Inline dictionary contains object with unknown key", self, inlineDict, key); \
            NSAssert(NO, nil); \
        } \
    } \
}]; \
[propertiesDict enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) \
{ \
    PTUStyleParseKeyResult const parseKeyResult = PTUStyleParseKey(key, table); \
    PTUStylePropertyType const parseKeyResultType = parseKeyResult.type; \
    NSString * const parseKeyResultName = parseKeyResult.name; \
    BOOL ok = NO; \
    definition(CheckEntryIsKnown_Property) \
    if (!ok) \
    { \
        NSLog(@"Style info object[%@] dictionary[%@] key[%@] Properties dictionary contains object with unknown key", self, propertiesDict, key); \
        NSAssert(NO, nil); \
    } \
}]; \
[contentDict enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) \
{ \
    PTUStyleParseKeyResult const parseKeyResult = PTUStyleParseKey(key, table); \
    PTUStylePropertyType const parseKeyResultType = parseKeyResult.type; \
    NSString * const parseKeyResultName = parseKeyResult.name; \
    BOOL ok = NO; \
    definition(CheckEntryIsKnown_Content) \
    if (!ok) \
    { \
        NSLog(@"Style info object[%@] dictionary[%@] key[%@] Content dictionary contains object with unknown key", self, contentDict, key); \
        NSAssert(NO, nil); \
    } \
}]; \

#define CheckPropertiesWhenDebug_DEBUG(definition, inlineDict, propertiesDict, contentDict)

#define PTUStyleOverrideInit(type_subclass, definition) \
- (instancetype _Nullable)initWithFilteredInfo:(PTUStyleInfo * _Nullable)info \
    parent:(__kindof type_subclass _Nullable)parent \
    table:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    NSAssert((parent == nil) || [parent isMemberOfClass:[self class]], @"Class mismatch. Class must match exactly, no children or parents etc"); \
\
    PTUStyleInfo *properties = nil; \
    properties = [info propertyOrNilOfType:PTUStylePropertyType_Style withName:@"properties" table:table].value; \
    NSAssert((properties == nil) || [properties isMemberOfClass:[PTUStyleInfo class]], @"properties must be nil or of class PTUStyleInfo"); \
    PTUStyleInfo *content = nil; \
    content = [info propertyOrNilOfType:PTUStylePropertyType_Style withName:@"content" table:table].value; \
    NSAssert((content == nil) || [content isMemberOfClass:[PTUStyleInfo class]], @"content must be nil or of class PTUStyleInfo"); \
\
    PTUStyleConcat(CheckPropertiesWhenDebug_ , DEBUG) ( definition, info.properties, properties.properties, content.properties ) \
\
    definition(GetProperties) \
    type_subclass result; \
    if ( \
        definition(CheckNil) \
        NO \
    ) \
    { \
        PTUStyleInitWith(definition(Init)); \
        result = self; \
    } \
    else \
    { \
        self = nil; \
        result = parent; \
        if (parent == nil) \
        { \
            NSLog(@"Style Info object[%@] info[%@] parent[%@] Object is parsed as empty and no parent is provided", self, info, parent); \
            NSAssert(NO, nil); \
        } \
    } \
\
    return result; \
}

// TODO: merge with PTUStyleInfo init ??
#define PTUStyleOverrideNSObjectInit(definition) \
- (instancetype _Nullable)initWithNSObject:(id _Nullable)object \
    table:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    if (object != nil) \
    { \
        if ([object isKindOfClass:[NSDictionary class]]) \
        { \
            NSDictionary *configDictionary = (NSDictionary *)object; \
            NSDictionary *properties = nil; \
            properties = [configDictionary objectForKey:@"style:properties"]; \
            NSAssert((properties == nil) || [properties isKindOfClass:[NSDictionary class]], @"properties must be nil or of class NSDictionary"); \
            NSDictionary *content = nil; \
            content = [configDictionary objectForKey:@"style:content"]; \
            NSAssert((content == nil) || [content isKindOfClass:[NSDictionary class]], @"content must be nil or of class NSDictionary"); \
\
            PTUStyleConcat(CheckPropertiesWhenDebug_ , DEBUG) ( definition, configDictionary, properties, content ) \
\
            definition(GetPropertiesFromDict) \
            definition(PropertiesDictToStyle) \
\
            PTUStyleInitWith(definition(InitDict)); \
        } \
        else \
        { \
            NSLog(@"PTUStyle object[%@] inputObject[%@] dictionary or nil must be passed", self, object); \
            NSAssert(NO, nil); \
            self = nil; \
        } \
    } \
    else \
    { \
        self = nil; \
    } \
\
    return self; \
}

#define PTUStyleOverrideNSObjectRepresentation(definition) \
- (id _Nonnull)nsObjectRepresentationWithTable:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    BOOL const hasInline = definition(CheckInline) NO; \
    BOOL const hasProperties = definition(CheckProperty) NO; \
    BOOL const hasContent = definition(CheckContent) NO; \
    NSDictionary *inlineRepresentation; \
    NSDictionary *propertiesRepresentation; \
    NSDictionary *contentRepresentation; \
    if (hasInline) \
    { \
        NSMutableDictionary<NSString *, id> *dict = [NSMutableDictionary new]; \
        definition(DictAssembleInline) \
        inlineRepresentation = [dict copy]; \
    } \
    else \
    { \
        inlineRepresentation = nil; \
    } \
    if (hasProperties) \
    { \
        NSMutableDictionary<NSString *, id> *dict = [NSMutableDictionary new]; \
        definition(DictAssembleProperty) \
        propertiesRepresentation = [dict copy]; \
    } \
    else \
    { \
        propertiesRepresentation = nil; \
    } \
    if (hasContent) \
    { \
        NSMutableDictionary<NSString *, id> *dict = [NSMutableDictionary new]; \
        definition(DictAssembleContent) \
        contentRepresentation = [dict copy]; \
    } \
    else \
    { \
        contentRepresentation = nil; \
    } \
\
    BOOL const inlineDefinedMatchesPresent = (hasInline == (inlineRepresentation != nil)); \
    BOOL const propertiesDefinedMatchesPresent = (hasProperties == (propertiesRepresentation != nil)); \
    BOOL const contentDefinedMatchesPresent = (hasContent == (contentRepresentation != nil)); \
    if (!inlineDefinedMatchesPresent) \
    { \
        NSLog(@"PTUStyle object[%@] inlineRepresentation[%@] propertiesRepresentation[%@] contentRepresentation[%@] Presence of inline representation does not match object definition", self, inlineRepresentation, propertiesRepresentation, contentRepresentation); \
        NSAssert(NO, nil); \
    } \
    if (!propertiesDefinedMatchesPresent) \
    { \
        NSLog(@"PTUStyle object[%@] inlineRepresentation[%@] propertiesRepresentation[%@] contentRepresentation[%@] Presence of properties representation does not match object definition", self, inlineRepresentation, propertiesRepresentation, contentRepresentation); \
        NSAssert(NO, nil); \
    } \
    if (!contentDefinedMatchesPresent) \
    { \
        NSLog(@"PTUStyle object[%@] inlineRepresentation[%@] propertiesRepresentation[%@] contentRepresentation[%@] Presence of content representation does not match object definition", self, inlineRepresentation, propertiesRepresentation, contentRepresentation); \
        NSAssert(NO, nil); \
    } \
\
    NSMutableDictionary *result = [NSMutableDictionary new]; \
    if (inlineRepresentation != nil) \
    { \
        [result addEntriesFromDictionary:inlineRepresentation]; \
    } \
    if (propertiesRepresentation != nil) \
    { \
        [result setObject:propertiesRepresentation forKey:@"style:properties"]; \
    } \
    if (contentRepresentation != nil) \
    { \
        [result setObject:contentRepresentation forKey:@"style:content"]; \
    } \
\
    return [result copy]; \
}


#define PTUStylePrivateInit(definitions) \
- (instancetype _Nullable) PTUStyleConcat( initWith_, definitions(InitDefinition) ) \
{ \
    self = [super initInternal]; \
    if (self != nil) \
    { \
        definitions(InitAssignments) \
        [self postInit]; \
    } \
    return self; \
}

#define PTUStyleContentOverrideInit(type_subclass, content_type, content_type_constant) \
- (instancetype _Nullable)initWithFilteredInfo:(PTUStyleInfo *)filteredInfo \
    parent:(__kindof PTUStyle *)parent \
    table:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    NSAssert((parent == nil) || [parent isMemberOfClass:[self class]], @"It must be"); \
    type_subclass parentStyle = ( type_subclass )parent; \
\
    type_subclass result; \
\
    if (filteredInfo.properties.count == 0) \
    { \
        if (parent == nil) \
        { \
            NSLog(@"Style Content object[%@] filteredInfo[%@] parent[%@] Filtered Info is empty and parent is not present", self, filteredInfo, parent); \
            NSAssert(NO, nil); \
            result = nil; \
        } \
        else \
        { \
            result = parent; \
        } \
    } \
    else \
    { \
        PTUStyleOrder *resultOrder; \
        PTUStyleOrder * const ownOrder = [filteredInfo propertyOfType:PTUStylePropertyType_Order withName:@"sort" table:table].value; \
        if (ownOrder == nil) \
        { \
            resultOrder = parentStyle.order; \
        } \
        else \
        { \
            resultOrder = ownOrder; \
        } \
\
        if (resultOrder == nil) \
        { \
            NSLog(@"Style Content object[%@] filteredInfo[%@] parent[%@] Cannot get order not from info nor from parent", self, filteredInfo, parent); \
            NSAssert(NO, nil); \
            result = nil; \
        } \
        else \
        { \
            NSMutableDictionary<NSString *, content_type > *resultUnsorted = [NSMutableDictionary new]; \
\
            if (parent != nil) \
            { \
                NSDictionary<NSString *, content_type > *parentUnsorted = parentStyle.unsorted; \
                [resultUnsorted addEntriesFromDictionary:parentUnsorted]; \
            } \
\
            [filteredInfo.properties enumerateKeysAndObjectsUsingBlock:^(NSString * _Nonnull key, PTUStylesProperty * _Nonnull property, BOOL * _Nonnull stop) \
             { \
                 if ((property.type != PTUStylePropertyType_Order) || ![property.name isEqualToString:@"sort"]) \
                 { \
                    content_type element = [property styleIfOfType: content_type_constant table: table ]; \
                     if (element != nil) \
                     { \
                         [resultUnsorted setObject:element forKey:key]; \
                     } \
                 } \
             }]; \
\
            NSMutableArray< content_type > *resultSorted = [NSMutableArray new]; \
            for (NSString * const key in resultOrder.keys) \
            { \
                content_type const element = [resultUnsorted objectForKey:key]; \
                if (element == nil) \
                { \
                    NSLog(@"Style Content object[%@] info[%@] parent[%@] key[%@] Object for key of not found", self, filteredInfo, parent, key); \
                    NSAssert(NO, nil); \
                } \
                else \
                { \
                    [resultSorted addObject:element]; \
                } \
            } \
\
            self = [self initWithOrder:resultOrder unsorted:resultUnsorted sorted:resultSorted]; \
            result = self; \
        } \
    } \
\
    return result; \
}

#define PTUStyleContentImplementationNSObjectInit(content_type, content_type_constant) \
- (instancetype)initWithNSObject:(id)object \
    table:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    if (object != nil) \
    { \
        if ([object isKindOfClass:[NSDictionary class]]) \
        { \
            NSDictionary *configDictionary = (NSDictionary *)object; \
\
            id orderNSObject = [configDictionary objectForKey:@"order:sort"]; \
            PTUStyleOrder *order = [[PTUStyleOrder alloc] initWithNSObject:orderNSObject table:table]; \
            if (order == nil) \
            { \
                NSLog(@"Style Content object[%@] nsObject[%@] Cannot get order from nsObject", self, object); \
                NSAssert(NO, nil); \
                self = nil; \
            } \
            else \
            { \
                NSMutableDictionary<NSString *, content_type > *resultUnsorted = [NSMutableDictionary new]; \
\
                [configDictionary enumerateKeysAndObjectsUsingBlock:^(id _Nonnull key, id _Nonnull obj_ns, BOOL * _Nonnull stop) \
                { \
                    if ([key isKindOfClass:[NSString class]]) \
                    { \
                        NSString *keyString = (NSString *)key; \
                        if (![keyString isEqualToString:@"order:sort"]) \
                        { \
                            PTUStylePropertyDefinition_PropertiesDictToStyle(content_type, obj, content_type_constant, _, ARC, Required, _) \
                            if (obj_id == nil) \
                            { \
                                NSLog(@"Style Content object[%@] nsObject[%@] key[%@] Could not initialize object for key", self, object, key); \
                                NSAssert(NO, nil); \
                            } \
                            else \
                            { \
                                [resultUnsorted setObject:obj_id forKey:key]; \
                            } \
                        } \
                    } \
                    else \
                    { \
                        NSLog(@"Style Content object[%@] nsObject[%@] key[%@] Key is not NSString class", self, object, key); \
                        NSAssert(NO, nil); \
                    } \
                }]; \
\
                NSMutableArray< content_type > *resultSorted = [NSMutableArray new]; \
                for (NSString * const key in order.keys) \
                { \
                    content_type const element = [resultUnsorted objectForKey:key]; \
                    if (element == nil) \
                    { \
                        NSLog(@"Style Content object[%@] nsObject[%@] key[%@] Object for key of not found", self, object, key); \
                        NSAssert(NO, nil); \
                    } \
                    else \
                    { \
                        [resultSorted addObject:element]; \
                    } \
                } \
\
                self = [self initWithOrder:order unsorted:resultUnsorted sorted:resultSorted]; \
            } \
        } \
        else \
        { \
            NSLog(@"PTUStyle object[%@] inputObject[%@] dictionary or nil must be passed", self, object); \
            NSAssert(NO, nil); \
            self = nil; \
        } \
    } \
    else \
    { \
        self = nil; \
    } \
\
    return self; \
}

#define PTUStyleContentOverrideNSObjectRepresentation(content_type_constant) \
- (id _Nonnull)nsObjectRepresentationWithTable:(PTUStyleTypesDescription const * _Nonnull const)table \
{ \
    if ((content_type_constant < table->count) && (PTUStylePropertyType_Order < table->count)) \
    { \
        NSMutableDictionary *result = [NSMutableDictionary new]; \
        [self.unsorted enumerateKeysAndObjectsUsingBlock:^(id _Nonnull key, id _Nonnull obj, BOOL * _Nonnull stop) \
        { \
            [result setObject:PTUStyleUnParseObject(obj, table->descriptions + content_type_constant, table) forKey:key]; \
        }]; \
        [result setObject:PTUStyleUnParseObject(self.order, table->descriptions + PTUStylePropertyType_Order, table) forKey:@"order:sort"]; \
\
        return [result copy]; \
    } \
    else \
    { \
        NSLog(@"Style object object[%@] type[%lu] Unknown type", self, (unsigned long)content_type_constant); \
        NSAssert(NO, nil); \
\
        return nil; \
    } \
}

#define PTUStyleDefineInterface(class_name_no_asterix, definition) \
@interface class_name_no_asterix : PTUStyle \
definition(DefineProperty) \
@end

#define PTUStyleImplementation( type_subclass, definition ) \
\
PTUStyleOverrideInit(type_subclass, definition) \
\
PTUStyleOverrideNSObjectInit(definition) \
\
PTUStyleOverrideNSObjectRepresentation(definition) \
\
PTUStylePrivateInit(definition) \

#define PTUStyleDefineContentInterface(class_name_no_asterix, content_type) \
@interface class_name_no_asterix : PTUStyleContent< content_type > \
@end

#define PTUStyleDefineContentStyleInterface(class_name_no_asterix, content_type) \
@interface class_name_no_asterix : PTUStyleContentStyle< content_type > \
@end

#define PTUStyleContentImplementation(class_name, content_type, content_type_constant) \
PTUStyleContentOverrideInit(class_name, content_type, content_type_constant) \
PTUStyleContentImplementationNSObjectInit(content_type, content_type_constant) \
PTUStyleContentOverrideNSObjectRepresentation(content_type_constant)

#define PTUStyleContentStyleImplementation(class_name, content_type, content_type_constant) \
PTUStyleContentOverrideInit(class_name, content_type, content_type_constant) \
PTUStyleContentImplementationNSObjectInit(content_type, content_type_constant) \
PTUStyleContentOverrideNSObjectRepresentation(content_type_constant)
