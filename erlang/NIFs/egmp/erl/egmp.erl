-module(egmp).
-export([add/2, mul/2, test/2]).
-on_load(init/0).

init() ->
      ok = erlang:load_nif("../src/.libs/libegmp", 0).

add(_A, _B) ->
      exit(nif_library_not_loaded).

mul(_A, _B) ->
      exit(nif_library_not_loaded).

test(_A, _B) ->
      exit(nif_library_not_loaded).


