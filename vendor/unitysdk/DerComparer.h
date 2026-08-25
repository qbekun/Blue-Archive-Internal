#pragma once
#include "unitysdk.h"

#define DERCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x7C9E00)
#define DERCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C9CD0)

	inline static constexpr unsigned int DerComparer_TypeDefinitionIndex = 22757;

	class DerComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DERCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DERCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

