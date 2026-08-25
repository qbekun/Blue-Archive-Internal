#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ResetContentType; }

#define MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_RESTORE_OFFSET UNITYSDK_OFFSET(0xFC70B0)
#define MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0xFC7520)
#define MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFC7710)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ResetableContentIdGenerator_TypeDefinitionIndex = 12410;

	class ResetableContentIdGenerator : public Il2CppObject
	{
	public:
		Il2CppObject* ResetContentTypeToBandWidthDict; // 0x0

		::FlatData::ResetContentType* Restore(::System::Int64 arg)
		{
			return ((::FlatData::ResetContentType*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_RESTORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Generate(::FlatData::ResetContentType* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::FlatData::ResetContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_GENERATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RESETABLECONTENTIDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

