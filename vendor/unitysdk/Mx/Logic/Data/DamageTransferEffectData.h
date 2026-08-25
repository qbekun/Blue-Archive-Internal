#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_DAMAGETRANSFEREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageTransferEffectData_TypeDefinitionIndex = 13580;

	class DamageTransferEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Int64 TransferRatio; // 0x60
		::System::Boolean IsDispellable; // 0x68
		::System::String* TransferredDamageEffectGroupId; // 0x70
		::System::Int32 TransferredDamageEffectLevel; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGETRANSFEREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

