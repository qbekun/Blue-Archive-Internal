#pragma once
#include "unitysdk.h"

class BeforehandGachaSavedSlot;
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }

#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_GETSAVEDSLOT_OFFSET UNITYSDK_OFFSET(0xA6C380)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_SAVEDRESULTCOUNT_OFFSET UNITYSDK_OFFSET(0xA6C3F0)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6C500)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_SAVEDSLOTS_OFFSET UNITYSDK_OFFSET(0xA6CB90)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_ISSAMEASSAVEDRESULT_OFFSET UNITYSDK_OFFSET(0xA6CBA0)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_HASSAVEDRESULT_OFFSET UNITYSDK_OFFSET(0xA6CC80)
#define BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_HASEMPTYSAVEDSLOT_OFFSET UNITYSDK_OFFSET(0xA6CCA0)

	inline static constexpr unsigned int BeforehandGachaSnapshotViewModel_TypeDefinitionIndex = 7847;

	class BeforehandGachaSnapshotViewModel : public Il2CppObject
	{
	public:
		::System::Int32 MaxSavedResultSlotCount; // 0x0
		Il2CppObject* _savedSlots; // 0x10

		BeforehandGachaSavedSlot* GetSavedSlot(::System::Int32 arg)
		{
			return ((BeforehandGachaSavedSlot*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_GETSAVEDSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SavedResultCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_SAVEDRESULTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SavedSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_SAVEDSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean IsSameAsSavedResult(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_ISSAMEASSAVEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasSavedResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_HASSAVEDRESULT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasEmptySavedSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASNAPSHOTVIEWMODEL_GET_HASEMPTYSAVEDSLOT_OFFSET))(nullptr);
		}

	};

