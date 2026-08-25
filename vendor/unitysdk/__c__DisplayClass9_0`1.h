#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class IMessagingWrapper; }

#define <>C__DISPLAYCLASS9_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS9_0`1__DETACHLISTENERINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass9_0`1_TypeDefinitionIndex = 10422;

	class <>c__DisplayClass9_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* handler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DetachListenerInternal_b__0(::Assets::_MX::Program::Scripts::Network::IMessagingWrapper* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IMessagingWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_0`1__DETACHLISTENERINTERNAL_B__0_OFFSET))(arg, nullptr);
		}

	};

