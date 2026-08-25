#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_GET_PREDICATE_OFFSET UNITYSDK_OFFSET(0xED6030)
#define MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0xED6040)
#define MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xED6050)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldLoadingScreenDispatch_TypeDefinitionIndex = 10947;

	class FieldLoadingScreenDispatch : public Il2CppObject
	{
	public:
		::System::Boolean _IsLoading_k__BackingField; // 0x18
		::System::String* _Predicate_k__BackingField; // 0x20

		::System::String* get_Predicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_GET_PREDICATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_GET_ISLOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

