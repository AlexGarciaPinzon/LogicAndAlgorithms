//
//  PTUStylesParse.h
//  Lobby
//
//  Created by hlpa on 2/8/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUStylesTypes.h"

@class PTUStyleInfo;

PTUStyleMethod_UnParseObject PTUStyleMethod_UnParseObject_Cannot;
PTUStyleMethod_UnParseObject PTUStyleMethod_UnParseObject_SameObject;
PTUStyleMethod_UnParseObject PTUStyleMethod_UnParseObject_Color;
PTUStyleMethod_UnParseObject PTUStyleMethod_UnParseObject_Font;
PTUStyleMethod_UnParseObject PTUStyleMethod_UnParseObject_NSRepresentation;
PTUStyleMethod_ParseInfo PTUStyleMethod_ParseInfo_Simple;
PTUStyleMethod_ParseInfo PTUStyleMethod_ParseInfo_Font;
PTUStyleMethod_ParseInfo PTUStyleMethod_ParseInfo_Cannot;
PTUStyleMethod_ParseInfo PTUStyleMethod_ParseInfo_Generic;
PTUStyleMethod_ParseArray PTUStyleMethod_ParseArray_Generic;
PTUStyleMethod_ParseArray PTUStyleMethod_ParseArray_Cannot;
PTUStyleMethod_ParseShortValue PTUStyleMethod_ParseShortValue_Generic;
PTUStyleMethod_ParseShortValue PTUStyleMethod_ParseShortValue_Color;
PTUStyleMethod_ParseShortValue PTUStyleMethod_ParseShortValue_Cannot;

typedef struct
{
    BOOL const parsed;
    BOOL const command;
    PTUStylePropertyType type;
    PTUStyleTypeDescription const * _Nonnull const description;
    NSString * _Nullable const name;
}
PTUStyleParseKeyResult;

extern PTUStyleTypesDescription const * _Nonnull const PTUStyleTypesCombineDescriptionTables(PTUStyleTypesDescription const * _Nonnull const table1, PTUStyleTypesDescription const * _Nonnull const table2);

extern PTUStyleTypesDescription const * _Nonnull const PTUStyleTypesGetDescriptionsCommon(void);

extern PTUStyleParseKeyResult PTUStyleParseKey(NSString * _Nonnull const key, PTUStyleTypesDescription const * _Nonnull const table);
extern id _Nullable PTUStyleParseObject(
                                        id _Nonnull const object,
                                        PTUStyleInfo * const _Nullable reference,
                                        PTUStyleTypeDescription const * _Nonnull const description,
                                        PTUStyleTypesDescription const * _Nonnull const table
                                        );
extern id _Nullable PTUStyleUnParseObject(
                                          id _Nonnull const object,
                                          PTUStyleTypeDescription const * _Nonnull const description,
                                          PTUStyleTypesDescription const * _Nonnull const table
                                         );
BOOL PTUStyleTypesValidate(PTUStyleTypesDescription const * _Nonnull const types);
