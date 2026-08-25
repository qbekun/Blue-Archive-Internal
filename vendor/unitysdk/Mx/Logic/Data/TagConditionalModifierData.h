#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA770)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TagConditionalModifierData_TypeDefinitionIndex = 13419;

	class TagConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		Il2CppObject* TagConstraintsInt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

