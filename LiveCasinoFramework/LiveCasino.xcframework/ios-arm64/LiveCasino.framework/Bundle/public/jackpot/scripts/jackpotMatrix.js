!function(t){"use strict";function i(t){var i=this;i._matrix=[],i.size=t,i.forEachCoin(function(t,o,n){i._matrix[o+"_"+n]=new JackpotCoin({x:o,y:n})})}i.prototype.forEachCoin=function(t){var i,o;for(i=1;i<=this.size.rows;i++)for(o=1;o<=this.size.cols;o++)t(this._matrix[i+"_"+o],i,o)},i.prototype.getCoin=function(t,i){return this._matrix[t+"_"+i]},t.JackpotMatrix=i}(window);