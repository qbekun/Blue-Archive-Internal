#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace FlatData { class EchelonExtensionType; }

#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FILTER_OFFSET UNITYSDK_OFFSET(0xFA10C0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FILTERASSIGNED_OFFSET UNITYSDK_OFFSET(0xFA1180)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xFA1210)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xFA1570)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xFA1590)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CREATECHARACTERENTITIES_OFFSET UNITYSDK_OFFSET(0xFA18A0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GETCHARACTERSTATBASEDABILITY_OFFSET UNITYSDK_OFFSET(0xFA1ED0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CHECKSAVEECHELONREQUESTVALIDITY_OFFSET UNITYSDK_OFFSET(0xFA2420)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_ISECHELONNUMBERVALID_OFFSET UNITYSDK_OFFSET(0xFA2990)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CHECKDUTYAVAILABLEECHELON_OFFSET UNITYSDK_OFFSET(0xFA2B70)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CALCECHELONPRESETLABELLENGTH_OFFSET UNITYSDK_OFFSET(0xFA2BE0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GENERATEMULLIGANCHARACTERIDLIST_OFFSET UNITYSDK_OFFSET(0xFA2C00)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINVALIDECHELONCONSTRAINTLIST_OFFSET UNITYSDK_OFFSET(0xFA2F40)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_ENCODECOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFA3100)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_DECODECOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFA32D0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FROMCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFA35D0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_VALIDCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFA26D0)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_VALIDCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFA3770)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GETMAXMULLIGANCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xFA3900)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFA3920)
#define MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE__CREATECHARACTERENTITIES_G__CREATECHARACTER|5_0_OFFSET UNITYSDK_OFFSET(0xFA1AD0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int EchelonDBService_TypeDefinitionIndex = 12325;

	class EchelonDBService : public Il2CppObject
	{
	public:
		Il2CppObject* Filter(Il2CppObject* arg, ::FlatData::EchelonType* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FILTER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FilterAssigned(Il2CppObject* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FILTERASSIGNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CreateCharacterEntities(::MX::GameLogic::DBModel::EchelonDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CREATECHARACTERENTITIES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		Il2CppObject* GetCharacterStatBasedAbility(::MX::Campaign::HexaUnit* arg, ::MX::GameLogic::DBModel::EchelonDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaUnit*, ::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GETCHARACTERSTATBASEDABILITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* CheckSaveEchelonRequestValidity(::MX::GameLogic::DBModel::EchelonDB* arg, Il2CppObject* arg2)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CHECKSAVEECHELONREQUESTVALIDITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEchelonNumberValid(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_ISECHELONNUMBERVALID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* CheckDutyAvailableEchelon(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CHECKDUTYAVAILABLEECHELON_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcEchelonPresetLabelLength(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CALCECHELONPRESETLABELLENGTH_OFFSET))(str, nullptr);
		}

		Il2CppObject* GenerateMulliganCharacterIdList(::MX::GameLogic::DBModel::EchelonDB* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GENERATEMULLIGANCHARACTERIDLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ContainValidEchelonConstraintList(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_CONTAINVALIDECHELONCONSTRAINTLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 EncodeCombatStyleIndex(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_ENCODECOMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeCombatStyleIndex(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_DECODECOMBATSTYLEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FromCombatStyleIndex(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_FROMCOMBATSTYLEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidCombatStyleIndex(::MX::GameLogic::DBModel::EchelonDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_VALIDCOMBATSTYLEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidCombatStyleIndex(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_VALIDCOMBATSTYLEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetMaxMulliganCardCount(::FlatData::EchelonExtensionType* arg)
		{
			return ((::System::Int32(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_GETMAXMULLIGANCARDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateCharacterEntities_g__CreateCharacter|5_0(::System::Int64 arg, ::System::Int32 arg2, <>c__DisplayClass5_0&* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ECHELONDBSERVICE__CREATECHARACTERENTITIES_G__CREATECHARACTER|5_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

