"use strict";(self.webpackChunk_live_client=self.webpackChunk_live_client||[]).push([["quickspin.t"],{179890:(e,t,o)=>{o.d(t,{IL:()=>m,PC:()=>l,TM:()=>d,Ul:()=>s,Xb:()=>f,ZP:()=>b,_D:()=>p,fn:()=>c,i4:()=>u});var i=o(639601),n=o.n(i),r=o(482609),a=o.n(r)()(n());a.push([e.id,".quick-spin-layout--ZoQqe{width:100%;height:100%;display:flex;flex-direction:column}@media (orientation: portrait){.root__device-type_tablet .quick-spin-layout--ZoQqe{flex-direction:column-reverse}}@media (orientation: portrait){.root__device-type_mobile .quick-spin-layout--ZoQqe{flex-direction:column-reverse}}.quick-spin-layout__frame--j3bvR{width:100%;height:100%}.quick-spin-layout__controls--HEPdU{height:2.5em;color:#ffffff;width:100%;display:flex;justify-content:right;align-items:center;background-color:#262625;border:0;border-radius:5px}.quick-spin-layout__control--uns8a{width:2em;height:2em;margin:0.5em}@media (hover: hover) and (pointer: fine){.root__device-type_desktop .quick-spin-layout__control--uns8a:hover{cursor:pointer}}.quick-spin-layout__control_close--ZMPFS{box-sizing:border-box;padding:0.3em}.quick-spin-layout__control_close-icon--u0kDA{stroke:#cfcfcf;stroke-miterlimit:10;stroke-width:11px}@media (hover: hover) and (pointer: fine){.root__device-type_desktop .quick-spin-layout__control_close-icon--u0kDA:hover{stroke:#f9b42d}}.quick-spin-layout__control_lobby-icon--kkcGn{width:100%;height:100%}.quick-spin-layout__external-control--AyTBq{margin:0.5em}\n",""]);var l="quick-spin-layout--ZoQqe",c="quick-spin-layout__frame--j3bvR",s="quick-spin-layout__controls--HEPdU",u="quick-spin-layout__control--uns8a",d="quick-spin-layout__control_close--ZMPFS",f="quick-spin-layout__control_close-icon--u0kDA",p="quick-spin-layout__control_lobby-icon--kkcGn",m="quick-spin-layout__external-control--AyTBq";let b=a},69521:(e,t,o)=>{o.d(t,{Z:()=>f});var i,n=o(256718),r=o(363940),a=o(826367),l=o(253584),c=o(563603),s=o(88481),u=o(858465);function d(e,t){if("object"==typeof Reflect&&"function"==typeof Reflect.metadata)return Reflect.metadata(e,t)}class f extends l.H{get isMuted(){return this._generalVolume.isMuted}toggleMuteState(){this._generalVolume.toggleMute()}setMuteState(e){e?this._generalVolume.mute():this._generalVolume.unmute()}constructor(e,t,o){super(),function(e,t,o){t in e?Object.defineProperty(e,t,{value:o,enumerable:!0,configurable:!0,writable:!0}):e[t]=o}(this,"_generalVolume",void 0),this._generalVolume=e,this.__.rxSubscribe(o.soundUpdate$,({mute:e})=>this.setMuteState(e)),this.__.rxSubscribe(o.gameLoadingEnd$.pipe((0,n.q)(1)),()=>{t.hasMultipleGames&&e.muteWithoutSync(),this.__.mobxReaction(()=>this.isMuted,e=>o.updateSound({mute:e}),{fireImmediately:!0})})}}f=function(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}([(0,r.b)(),(i=(0,a.f)(u.lL.$general),function(e,t){i(e,t,0)}),d("design:type",Function),d("design:paramtypes",[void 0===u.lL?Object:u.lL,void 0===s.U?Object:s.U,void 0===c.P?Object:c.P])],f)},188823:(e,t,o)=>{o.r(t),o.d(t,{default:()=>a});var i=o(714590),n=o(809513),r=o(95981);let a={Layout:(0,i._z)(r.S,"LaunchedGame"),moduleConfig:(0,n.V)({})}},95981:(e,t,o)=>{o.d(t,{S:()=>i});let i=(0,o(209483).h)({additionalControls:[]})},209483:(e,t,o)=>{o.d(t,{h:()=>$});var i=o(202784),n=o(18495),r=o(338960),a=o(912335),l=o(543297),c=o(666311),s=o(256718),u=o(72779),d=o.n(u),f=o(61638),p=o(236851),m=o(563603),b=o(565446),y=o(347858),g=o(347010),h=o(716681),_=o(490050),v=o(64555),k=o(116144),S=o(148224),P=o(266400),j=o(823742),q=o(46062),O=o.n(q),R=o(544036),x=o.n(R),w=o(396793),C=o.n(w),G=o(517892),E=o.n(G),U=o(211173),M=o.n(U),V=o(942464),L=o.n(V),Z=o(179890),I={};function T(e,t,o){return t in e?Object.defineProperty(e,t,{value:o,enumerable:!0,configurable:!0,writable:!0}):e[t]=o,e}function D(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}function A(e,t){if("object"==typeof Reflect&&"function"==typeof Reflect.metadata)return Reflect.metadata(e,t)}I.styleTagTransform=L(),I.setAttributes=E(),I.insert=C().bind(null,"head"),I.domAPI=x(),I.insertStyleElement=M(),O()(Z.ZP,I),Z.ZP&&Z.ZP.locals&&Z.ZP.locals;let F={id:_.Z,props:{viewBox:"0 0 78.49 78.49"}},$=({additionalControls:e})=>{class t extends P.d{render(){let{url:t}=this._openUrlParams;return i.createElement("div",{className:Z.PC,onClickCapture:this.onFocusActivity},i.createElement("div",{className:Z.Ul},e.map((e,t)=>i.createElement("div",{className:Z.IL,key:t},i.createElement(e,null))),i.createElement("div",{onClick:this.openLobby,className:d()(Z.i4)},i.createElement(g.l,{source:h.Z,iconClassName:Z._D})),i.createElement("div",{className:d()(Z.i4,Z.TM),onClick:()=>this._quickSpinGameStore.closeGame(p.K.ExitByUserChoice)},i.createElement(g.l,{source:F.id,svgProps:F.props,iconClassName:Z.Xb}))),i.createElement("iframe",{src:t,key:t,className:Z.fn,id:"live-gameframe",ref:this._iframe.update}),i.createElement(k.l,null),i.createElement(j.Bv,null),i.createElement(j.iW,null))}constructor(e,t){super(e,t),T(this,"_openUrlParams",void 0),T(this,"_iframe",new S.mp),T(this,"openLobby",()=>{this._lobbyStore.updateLobbySlotIndex(),this._lobbyStore.open()}),T(this,"onFocusActivity",()=>{this._gameSlotStore.focusSlot()}),this._openUrlParams=this._gameFrameStore.requestOpenUrlParams(),this.__.rxSubscribe(this._iframe.existingNode$.pipe((0,a.w)(e=>(0,l.R)(e,"load").pipe((0,c.h)(e))),(0,s.q)(1)),e=>this._openUrlParams.openUrlCallback((0,b.W)(e.contentWindow,"QuickSpinLayout# iframe content window is absent")))}}return D([r.resolve,A("design:type",void 0===y.Y6?Object:y.Y6)],t.prototype,"_lobbyStore",void 0),D([r.resolve,A("design:type",void 0===f.S?Object:f.S)],t.prototype,"_quickSpinGameStore",void 0),D([(0,r.resolve)(v.o.$),A("design:type",void 0===v.o?Object:v.o)],t.prototype,"_gameSlotStore",void 0),D([(0,r.resolve)(m.P),A("design:type",void 0===m.P?Object:m.P)],t.prototype,"_gameFrameStore",void 0),t=D([n.Pi,A("design:type",Function),A("design:paramtypes",[Object,Object])],t)}},809513:(e,t,o)=>{o.d(t,{V:()=>L});var i,n=o(363940),r=o(577293),a=o(563603),l=o(35109),c=o(779966),s=o(586403),u=o(185355),d=o(681766),f=o(178157),p=o(64555),m=o(403483),b=o(89373),y=o(62367),g=o(69521),h=o(61638),_=o(236851),v=o(365799),k=o(643569);function S(e,t,o){return t in e?Object.defineProperty(e,t,{value:o,enumerable:!0,configurable:!0,writable:!0}):e[t]=o,e}function P(e,t){if("object"==typeof Reflect&&"function"==typeof Reflect.metadata)return Reflect.metadata(e,t)}class j{get gameId(){return this._quickSpinGameStore.gameCode}get tableName(){return this._quickSpinGameStore.name}get fallbackImageUrl(){var e;return null===(e=this._lobbyConfigStore.getQuickSpinItem(this._quickSpinGameStore.gameCode))||void 0===e?void 0:e.imageURL}get canCloseGame(){return this._quickSpinGameStore.canCloseGame}constructor(e,t){S(this,"_quickSpinGameStore",void 0),S(this,"_lobbyConfigStore",void 0),S(this,"streamSnapshotUrl",void 0),S(this,"closeIfPossible",void 0),S(this,"closeAllIfPossible",void 0),S(this,"onGameMiniviewAction",void 0),this._quickSpinGameStore=e,this._lobbyConfigStore=t,this.streamSnapshotUrl=void 0,this.closeIfPossible=()=>{this._quickSpinGameStore.closeGame(_.K.ExitByUserChoice)},this.closeAllIfPossible=()=>{this.closeIfPossible()},this.onGameMiniviewAction=v.Z}}j=function(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}([(0,n.b)(),P("design:type",Function),P("design:paramtypes",[void 0===h.S?Object:h.S,void 0===k.F?Object:k.F])],j);var q=o(823742),O=o(814291),R=o(820218);function x(e,t){if("object"==typeof Reflect&&"function"==typeof Reflect.metadata)return Reflect.metadata(e,t)}class w extends q.ni{constructor(e){super(e),function(e,t,o){t in e?Object.defineProperty(e,t,{value:o,enumerable:!0,configurable:!0,writable:!0}):e[t]=o}(this,"iframe",this.createGameViewModal({selector:q.w8.GameMain,displayLayer:q.Im.GameHigh,overlay:{closeOnClick:!0},template:R.J}))}}w=function(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}([(0,n.b)(),x("design:type",Function),x("design:paramtypes",[void 0===q.fW?Object:q.fW])],w);var C=o(826367),G=o(253584),E=o(873077);function U(e,t){if("object"==typeof Reflect&&"function"==typeof Reflect.metadata)return Reflect.metadata(e,t)}class M extends G.H{constructor(e,t,o,i){super(),this.__.rxSubscribe(e.openPage$,({pageId:e})=>{switch(e){case"cashier":i.openCashier();break;case"game_history":o.open(t.gameCode);break;default:(0,E.vE)(e)}})}}M=function(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}([(0,n.b)(),(i=(0,C.f)(d.kT.$),function(e,t){i(e,t,3)}),U("design:type",Function),U("design:paramtypes",[void 0===a.P?Object:a.P,void 0===h.S?Object:h.S,void 0===u.u?Object:u.u,void 0===d.kT?Object:d.kT])],M);class V{onToggleQuickMuteButton(){}onSliderVolumeChanged(){}onSliderToggleVolumeChanged(){}onTogglerMuteVolumeChanged(){}onWrapperVolumeChanged(){}onToggleVolumeInTutorial(){}}function L({extras:e=[]}){return(0,r.UW)(c.E.qs,(0,m.H)(j),(0,r.UW)(O.w0,{bindings:({bind:e})=>{e(q.fW,["exported"]).toSelf(),e(w,["exported","instantiated"]).toSelf()}}),{bindings:({bind:e})=>{e(p.o.$,["exported"]).toDynamicValue(e=>{let t=e.container.get(p.q),o=e.container.get(l.V.$);return t.createGameSlot(o)}),e(g.Z,["exported","instantiated"]).toSelf(),e(s.Dx.$,["exported"]).to(V),e(M,["instantiated"]).toSelf(),e(u.u,["exported"]).toDynamicValue(({container:e})=>new u.u(e.get(d.kT.$),e.get(f.Hh),e.get(w).iframe))}},y.b.forGame,(0,b.Lq)(e=>e.get(a.P).gameLoadingEnd$),...e)}V=function(e,t,o,i){var n,r=arguments.length,a=r<3?t:null===i?i=Object.getOwnPropertyDescriptor(t,o):i;if("object"==typeof Reflect&&"function"==typeof Reflect.decorate)a=Reflect.decorate(e,t,o,i);else for(var l=e.length-1;l>=0;l--)(n=e[l])&&(a=(r<3?n(a):r>3?n(t,o,a):n(t,o))||a);return r>3&&a&&Object.defineProperty(t,o,a),a}([(0,n.b)()],V)}}]);