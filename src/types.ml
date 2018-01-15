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

(* external make : (('impl provider_init_arg -> t)[@bs.ignore ]) = "web3-eth" *)

type _ x =
| S :  string -> string x
| F : (int -> unit) x
(* external log :  ('a x [@bs.ignore]) -> 'a -> string = "hello" *)
