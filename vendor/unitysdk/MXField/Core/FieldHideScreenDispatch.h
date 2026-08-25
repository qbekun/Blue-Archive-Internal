#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_FIELDHIDESCREENDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xED5FA0)
#define MXFIELD_CORE_FIELDHIDESCREENDISPATCH_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0xED6010)
#define MXFIELD_CORE_FIELDHIDESCREENDISPATCH_GET_PREDICATE_OFFSET UNITYSDK_OFFSET(0xED6020)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldHideScreenDispatch_TypeDefinitionIndex = 10946;

	class FieldHideScreenDispatch : public Il2CppObject
	{
	public:
		::System::Boolean _IsLoading_k__BackingField; // 0x18
		::System::String* _Predicate_k__BackingField; // 0x20

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDHIDESCREENDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDHIDESCREENDISPATCH_GET_ISLOADING_OFFSET))(nullptr);
		}

		::System::String* get_Predicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDHIDESCREENDISPATCH_GET_PREDICATE_OFFSET))(nullptr);
		}

	};
}

