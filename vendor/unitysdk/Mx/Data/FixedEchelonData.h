#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FIXEDECHELONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18488C0)
#define MX_DATA_FIXEDECHELONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18488D0)

namespace MX::Data
{
	inline static constexpr unsigned int FixedEchelonData_TypeDefinitionIndex = 15825;

	class FixedEchelonData : public Il2CppObject
	{
	public:
		::System::Int64 EchelonId; // 0x10
		::System::Int64 FixedEchelonSettingId; // 0x18
		::System::Int64 StartTileId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

