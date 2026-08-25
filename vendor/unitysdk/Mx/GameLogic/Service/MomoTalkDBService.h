#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::Data { class AcademyMessageData; }

#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB5410)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_RESTOREMESSAGEGROUPHISTORYRECURSIVE_OFFSET UNITYSDK_OFFSET(0xFB5420)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_GETMESSAGEGROUPIDSBYRANGE_OFFSET UNITYSDK_OFFSET(0xFB5730)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_CALCNEWARRIVALMESSAGEGROUPIDS_OFFSET UNITYSDK_OFFSET(0xFB5980)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_RESTOREMESSAGEGROUPHISTORY_OFFSET UNITYSDK_OFFSET(0xFB5F20)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_VALIDPRODUCTIONSTEPCHECKMEMORYLOBBY_OFFSET UNITYSDK_OFFSET(0xFB60C0)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_ISALLOWTORECEIVEFORNEWARRIVAL_OFFSET UNITYSDK_OFFSET(0xFB6520)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_ISALLOWTORECEIVE_OFFSET UNITYSDK_OFFSET(0xFB66E0)
#define MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_CALCNEWARRIVALMESSAGEGROUPIDSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xFB5D30)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int MomoTalkDBService_TypeDefinitionIndex = 12378;

	class MomoTalkDBService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RestoreMessageGroupHistoryRecursive(Il2CppObject&* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_RESTOREMESSAGEGROUPHISTORYRECURSIVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetMessageGroupIdsByRange(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_GETMESSAGEGROUPIDSBYRANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* CalcNewArrivalMessageGroupIds(::System::Int64 arg, ::MX::GameLogic::DBModel::CharacterDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_CALCNEWARRIVALMESSAGEGROUPIDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* RestoreMessageGroupHistory(::System::Int64 arg, ::MX::GameLogic::DBModel::CharacterDB* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_RESTOREMESSAGEGROUPHISTORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ValidProductionStepCheckMemoryLobby(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_VALIDPRODUCTIONSTEPCHECKMEMORYLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAllowToReceiveForNewArrival(::MX::Data::AcademyMessageData* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::AcademyMessageData*, ::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_ISALLOWTORECEIVEFORNEWARRIVAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAllowToReceive(::MX::Data::AcademyMessageData* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::AcademyMessageData*, ::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_ISALLOWTORECEIVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CalcNewArrivalMessageGroupIdsRecursive(Il2CppObject&* arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::CharacterDB* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int64, ::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MOMOTALKDBSERVICE_CALCNEWARRIVALMESSAGEGROUPIDSRECURSIVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

