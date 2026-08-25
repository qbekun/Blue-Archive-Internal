#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_ARRAYPOOL`1_GET_SHARED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_ARRAYPOOL`1_RENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_ARRAYPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_ARRAYPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_ARRAYPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPool`1_TypeDefinitionIndex = 25189;

	class ArrayPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Shared_k__BackingField; // 0x0

		Il2CppObject* get_Shared()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOL`1_GET_SHARED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Rent(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOL`1_RENT_OFFSET))(arg, nullptr);
		}

		::System::Void Return(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOL`1_RETURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

