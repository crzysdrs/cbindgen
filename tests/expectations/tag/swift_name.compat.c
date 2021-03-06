#define CF_SWIFT_NAME(_name) __attribute__((swift_name(#_name)))

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct Box_SelfTypeTestStruct;

struct Opaque;

struct PointerToOpaque {
  struct Opaque *ptr;
};

struct SelfTypeTestStruct {
  uint8_t times;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

struct PointerToOpaque PointerToOpaque_create(uint8_t times) CF_SWIFT_NAME(PointerToOpaque.create(times:));

void PointerToOpaque_sayHello(struct PointerToOpaque self)
/*a comment!*/ CF_SWIFT_NAME(PointerToOpaque.sayHello(self:));

void SelfTypeTestStruct_should_exist_annotated_by_name(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_by_name(self:));

void SelfTypeTestStruct_should_exist_annotated_mut_by_name(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_mut_by_name(self:));

void SelfTypeTestStruct_should_exist_annotated_mut_self(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_mut_self(self:));

void SelfTypeTestStruct_should_exist_annotated_self(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_self(self:));

void SelfTypeTestStruct_should_exist_mut_unannotated(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_mut_unannotated(self:));

void SelfTypeTestStruct_should_exist_ref(const struct SelfTypeTestStruct *self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_ref(self:));

void SelfTypeTestStruct_should_exist_ref_mut(struct SelfTypeTestStruct *self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_ref_mut(self:));

void SelfTypeTestStruct_should_exist_unannotated(struct SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_exist_unannotated(self:));

void SelfTypeTestStruct_should_not_exist_box(struct Box_SelfTypeTestStruct self) CF_SWIFT_NAME(SelfTypeTestStruct.should_not_exist_box(self:));

struct Box_SelfTypeTestStruct SelfTypeTestStruct_should_not_exist_return_box(void) CF_SWIFT_NAME(SelfTypeTestStruct.should_not_exist_return_box());

void free_function_should_exist_annotated_by_name(struct SelfTypeTestStruct test_struct) CF_SWIFT_NAME(free_function_should_exist_annotated_by_name(test_struct:));

void free_function_should_exist_annotated_mut_by_name(struct SelfTypeTestStruct test_struct) CF_SWIFT_NAME(free_function_should_exist_annotated_mut_by_name(test_struct:));

void free_function_should_exist_ref(const struct SelfTypeTestStruct *test_struct) CF_SWIFT_NAME(free_function_should_exist_ref(test_struct:));

void free_function_should_exist_ref_mut(struct SelfTypeTestStruct *test_struct) CF_SWIFT_NAME(free_function_should_exist_ref_mut(test_struct:));

void free_function_should_not_exist_box(struct Box_SelfTypeTestStruct boxed) CF_SWIFT_NAME(free_function_should_not_exist_box(boxed:));

void rust_print_hello_world(void) CF_SWIFT_NAME(rust_print_hello_world());

void unnamed_argument(struct SelfTypeTestStruct*);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
