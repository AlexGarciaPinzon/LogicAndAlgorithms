!function(e){"use strict";var n,t,o=e.window,a=document.querySelector('[data-name="gameContainer"]'),i=document.querySelector('[data-name="templeContainer"]'),r=document.querySelector('[data-name="winScreenAmount"]'),c=document.querySelector('[data-name="gameTimer"]'),l=document.querySelector('[data-name="loadingScreenContainer"]'),m=document.querySelector('[data-name="progressBarTimer"]'),u='[data-name="winAmountPlace"]',d=document.querySelector('[data-name="winCeremonyBtn"]');document.querySelector('[data-name="containerMessageBox"]');var f=new JackpotMatrix({cols:5,rows:4}),s="",p=document.querySelector('[data-name="appVersion"]'),w=["ultimate","super","extra","power"],v={ultimate:15,super:14,extra:13,power:12},E="",h={},y={},g={},k={};function S(e){var n,t,o,a,r,l;C(e),n=k.jackpotGameOffer.winningSequence,t={},n.forEach(function(e,n){t[n]=e}),h=t,s=k.backUrl,function(){var e=[],n={};for(var t in h)e.push(h[t]);e.forEach(function(e){n[e]||(n[e]=0),n[e]=++n[e],3===n[e]&&(E=e)})}(),a=document.createDocumentFragment(),f.forEachCoin(function(e){a.appendChild(e.coinElement)}),i.appendChild(a),r=0,l=Object.keys(h).length,f.forEachCoin(function(e){e.coinElement.addEventListener("click",function n(t){var o,a;t.currentTarget.removeEventListener("click",n),j(),r>=l||(o=h[r],a=g[o]++,e.moveTo(y[o][a],o,function(){var n=x(o);e.coinElement.className+=" coin-not-here",n[a].className+=" coin-here"}),++r===l&&(G(),function(){for(var e,n=A(i),t=0;t<3;t++)e=document.querySelectorAll(".power-item_"+E);!function e(n,t,o){var a,i=0;for(i in n)if(n.hasOwnProperty(i)&&"length"!==i&&!1===(a=i,t.call(o,n[a],a,n)))break;return e}(e,function(e,t,o){var a=A(e),i=function(){var e,n=document.createElement("fakeElement"),t={animation:"animationend",OAnimation:"oAnimationEnd",MozAnimation:"animationend",WebkitAnimation:"webkitAnimationEnd"};for(e in t)if(void 0!==n.style[e])return t[e]}();e.className+=" power-item_animated",i&&(e.addEventListener(i,function(){e.style.left=n.elementPositionHorizontal-a.elementPositionHorizontal+"px",e.style.top=n.elementPositionVertical-a.elementPositionVertical+"px"}),parseInt(t)===o.length-1&&e.addEventListener(i,function(){var e,n;e=k.jackpotGameOffer.greyElements,n=0,f.forEachCoin(function(t,o,a){!t.coinElement.firstElementChild.classList.contains("selected")&&(t.coinElement.querySelector('[data-name="powerItem"]').classList.add("power-item_"+e[n],"power-item_"+e[n]+"_greyed"),t.coinElement.querySelector('[data-name="coinRotate"]').style.display="none",e[n]?++n:n=0)}),_(),b()}))})}()))})}),j(),(o=new CountdownTimer(k.jackpotGameOffer.timeout)).onTick(function(e){c.innerText=e.toString()}),o.onEnd(O),o.start()}function q(e){C(e),G(),j(),_(k.jackpotGameOffer.winAmount),b()}function C(e){k=e,l.className+=" isHidden",s=k.backUrl,w.forEach(function(e){g[e]=0})}function O(){var e,n,t=[];n=[],k.jackpotGameOffer.winningSequence.forEach(function(t,o){do e=T(1,5)+"_"+T(1,4);while(-1!==n.indexOf(e))n[o]=e}),t=n,Object.keys(h).forEach(function(e,n){f._matrix[t[n]].coinElement.click()})}function T(e,n){return Math.floor(Math.random()*(n-e))+e}function j(){var e=document.querySelectorAll(u);w.forEach(function(n){var t,o=x(n),a=document.getElementById(n).querySelector(u),i=L(n,k.jackpotGameOffer.levels).length;for(var r in i&&i>=v[n]&&e.forEach(e=>e.classList.add("win-panel-item__amount_scaled-down")),a.innerHTML=L(n,k.jackpotGameOffer.levels),y[n]=[],o)o.hasOwnProperty(r)&&"length"!==r&&(t=o[r].getBoundingClientRect(),y[n].push({x:t.left+t.width/2,y:t.top+t.height/2}))})}function x(e){return document.getElementById(e).querySelectorAll('[data-name="winCoinPlace"]')}function A(e){var n=e.getBoundingClientRect();if(n)return{elementPositionHorizontal:n.left+n.width/2,elementPositionVertical:n.top+n.height/2}}function G(){a.className+=" winCeremonyEnd"}function L(e,n){var t=null;return n.forEach(function(n){n.id===e&&(t=n.amount)}),t}function _(e){var n=document.querySelector('[data-name="winScreenContainer"]'),t=" winScreen_",o=k.jackpotGameOffer.winLevelId,a=e||k.jackpotGameOffer.winAmount;r.innerText=a,n.className+=t+"appear"+t+o}function b(){var e=new CountdownTimer(5);e.start(),e.onEnd(function(){d.click()})}new JackpotDataService(function(e){var n=new CountdownTimer(10);n.onTick(function(e){m.innerText=e.toString()}),e.isBrokenGame?n.onEnd(q.bind(null,e)):n.onEnd(S.bind(null,e)),n.start(),e.jackpotGameOffer.languageCode}),n=function(e){var n=Object.values(JSON.parse(e))[0];p.innerText="v. "+n},(t=new XMLHttpRequest).overrideMimeType&&t.overrideMimeType("application/json"),t.open("GET","version.json",!0),t.onreadystatechange=function(){4==t.readyState&&"200"==t.status&&n(t.responseText)},t.send(null),d.addEventListener("click",function(){o.parent.postMessage({message:"jackpot-close"},"*"),s?location.href=s:o.close()})}({window:window});