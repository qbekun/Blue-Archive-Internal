#pragma once
#include "../unitysdk.h"

#define SYSTEM_PARAMSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EB90)
#define SYSTEM_PARAMSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EC30)
#define SYSTEM_PARAMSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x936ECD0)
#define SYSTEM_PARAMSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x936ED70)
#define SYSTEM_PARAMSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x936EE30)
#define SYSTEM_PARAMSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x936EE50)
#define SYSTEM_PARAMSARRAY_GETATSLOW_OFFSET UNITYSDK_OFFSET(0x936EEE0)
#define SYSTEM_PARAMSARRAY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x936EF40)

namespace System
{
	inline static constexpr unsigned int ParamsArray_TypeDefinitionIndex = 23817;

	class ParamsArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_oneArgArray; // 0x0
		::Il2CppArray<::System::Object*>* s_twoArgArray; // 0x8
		::Il2CppArray<::System::Object*>* s_threeArgArray; // 0x10
		::System::Object* _arg0; // 0x10
		::System::Object* _arg1; // 0x18
		::System::Object* _arg2; // 0x20
		::Il2CppArray<::System::Object*>* _args; // 0x28

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* GetAtSlow(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GETATSLOW_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

