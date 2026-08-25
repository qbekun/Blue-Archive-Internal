#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_ECHELONSLOTMODIFIERDATA_SHOULDSERIALIZEECHELONSLOTINFOS_OFFSET UNITYSDK_OFFSET(0x11DA630)
#define MX_LOGIC_DATA_ECHELONSLOTMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA680)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonSlotModifierData_TypeDefinitionIndex = 13404;

	class EchelonSlotModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		Il2CppObject* EchelonSlotInfos; // 0x20

		::System::Boolean ShouldSerializeEchelonSlotInfos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIERDATA_SHOULDSERIALIZEECHELONSLOTINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

