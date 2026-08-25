#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class IUCEntityComposition; }

#define <>C__37`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__37`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__37`1__FINDCOMPOSITION_B__37_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__37`1_TypeDefinitionIndex = 9711;

	class <>c__37`1 : public Il2CppObject
	{
	public:
		Il2CppObject* __9; // 0x0
		Il2CppObject* __9__37_0; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__37`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__37`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindComposition_b__37_0(::MXUnderCover::IUCEntityComposition* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::IUCEntityComposition*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__37`1__FINDCOMPOSITION_B__37_0_OFFSET))(arg, nullptr);
		}

	};

