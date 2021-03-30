# libtca

This is a all purposes C library containing various utilities functions.

### Myaml
[libyaml](https://github.com/yaml/libyaml) wrapper. The most powerful function is the `myaml_unpack`, allowing a "scanf" style reading of yaml files.
```c
myaml_unpack(db, "{s?s,s?s,ss,s?s,ss,s?i}",
        "host", &target->db.host, "port", &target->db.port,
        "user", &target->db.user, "passwd", &target->db.passwd,
        "database", &target->db.database, "pool_size", &target->db.pool_size
        );
```

It supports strings, arrays, scalars, and objects. It's mostly made for config file reading, but as been used for runtime json parsing. (I wouldn't recommend it)

### Vector
Vector (called "list" or "array" in other languages) library made by [lchenut](https://github.com/lchenut). A lot of various functions, everything you need.

### Hashtable
Hashtable library. Not very customizable without modifying it. Binary keys (with helper functions for string keys), custom type value.

### Others
- Dynarray: stupid vectors
- intmap: array with custom start & end index
- utils: various utils functions
