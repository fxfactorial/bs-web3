type global;
[@bs.val "web3"] external get : Js.undefined(global) = "";

type provider;
[@bs.get] external currentProvider : global => provider = "";
[@bs.scope "window"] [@bs.val] external ethereum : Js.undefined(provider) = "";

[@bs.send] external enable : provider => Js.Promise.t(unit) = "";

type t;
[@bs.new] [@bs.module] external makeWeb3 : provider => t = "web3";

[@bs.get] external currentProvider__fromWeb3 : t => provider = "currentProvider";

[@bs.get] external eth : t => Eth.t = "";

type version;
[@bs.get] external version : global => version = "";

type msg_params;
[@bs.obj] external msg_params : 
                      (~name:string) => 
                      (~type__:string) =>
                      (~value:'a) => 
                      msg_params = "";

type send_async_params;
[@bs.obj] external send_async_params : 
                    (~method__:string) => 
                    (~params:(Js.Array.t(msg_params),Eth.address)) =>
                    (~from:Eth.address) => 
                    send_async_params = "";

type async_result;
type send_async_callback = string => async_result => unit;
[@bs.send.pipe : provider] external sendAsync : send_async_params => send_async_callback => unit = "";

[@bs.get] external async_result_sha : async_result => string = "result";
