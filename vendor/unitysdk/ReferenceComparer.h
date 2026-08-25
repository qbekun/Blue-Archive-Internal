#pragma once
#include "unitysdk.h"

#define REFERENCECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B446B0)
#define REFERENCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9B44770)

	inline static constexpr unsigned int ReferenceComparer_TypeDefinitionIndex = 29449;

	class ReferenceComparer : public Il2CppObject
	{
	public:
		::System::ComponentModel::ReferenceConverter* _converter; // 0x10

		::System::Void .ctor(::System::ComponentModel::ReferenceConverter* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ReferenceConverter*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

