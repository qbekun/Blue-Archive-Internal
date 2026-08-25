#pragma once
#include "unitysdk.h"

#define CULTURECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B27970)
#define CULTURECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9B279D0)

	inline static constexpr unsigned int CultureComparer_TypeDefinitionIndex = 29365;

	class CultureComparer : public Il2CppObject
	{
	public:
		::System::ComponentModel::CultureInfoConverter* _converter; // 0x10

		::System::Void .ctor(::System::ComponentModel::CultureInfoConverter* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CultureInfoConverter*, ::PVOID))((::PBYTE)hIl2Cpp + CULTURECOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CULTURECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

