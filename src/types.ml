class type ['provider_impl] _module = object
  method set_provider : unit -> unit [@@bs.set]
end [@bs]

type t

class type bzz = object
  inherit [t] _module
end [@bs]

class type eth = object
  inherit [t] _module
end [@bs]

type request = < > Js.t

(* class type batch = object
 * 
 *   end [@bs] *)

type batch =
  <add:request -> unit [@bs.meth];
   execute:unit -> unit [@bs.meth]> Js.t

type big_number 

external toString : int -> string = "" [@@bs.send.pipe : big_number]
