-module(egmp).
-export([big_add/2, big_mul/2, big_and/2, big_xor/2, big_or/2, big_setbit/2, 
         big_clearbit/2, big_bitcount/1, big_countbitset/1]).
-on_load(init/0).

init() ->
      ok = erlang:load_nif("../src/.libs/libegmp", 0).

big_add(_A, _B) ->
      exit(nif_library_not_loaded).

big_mul(_A, _B) ->
      exit(nif_library_not_loaded).

big_and(_A, _B) ->
      exit(nif_library_not_loaded).

big_xor(_A, _B) ->
      exit(nif_library_not_loaded).

big_or(_A, _B) ->
      exit(nif_library_not_loaded).

big_setbit(_A, _B) ->
      exit(nif_library_not_loaded).

big_clearbit(_A, _B) ->
      exit(nif_library_not_loaded).

big_bitcount(_A) ->
      exit(nif_library_not_loaded).

big_countbitset(_A) ->
      exit(nif_library_not_loaded).


