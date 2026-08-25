#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF96730)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_SETCONTENTSAVEDBENTRANCEFEEANDCREATETIME_OFFSET UNITYSDK_OFFSET(0xF96740)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_TRYPARSECONTENTSAVEDB_OFFSET UNITYSDK_OFFSET(0xF974D0)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_REDUCEENTERCOST_OFFSET UNITYSDK_OFFSET(0xF97850)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETENTERMINIMUMCOST_OFFSET UNITYSDK_OFFSET(0xF97D90)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_EXTRACTCONTENTSAVETYPE_OFFSET UNITYSDK_OFFSET(0xF976F0)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_CALCENTRANCEFEEREFUNDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF97EF0)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETTRIMTIME_OFFSET UNITYSDK_OFFSET(0xF98A60)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_ISVALIDCONTENTSAVEDB_OFFSET UNITYSDK_OFFSET(0xF98B20)
#define MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETCONTENTSTAGEDATAINFO_OFFSET UNITYSDK_OFFSET(0xF967D0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ContentSaveDBService_TypeDefinitionIndex = 12300;

	class ContentSaveDBService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SetContentSaveDBEntranceFeeAndCreateTime(::MX::GameLogic::DBModel::AccountDB* arg, ::MX::GameLogic::DBModel::ContentSaveDB* arg2, ::MX::GameLogic::DBModel::ContentSaveDB* arg3, ::System::Int64 arg4, ::System::DateTime* arg5)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AccountDB*, ::MX::GameLogic::DBModel::ContentSaveDB*, ::MX::GameLogic::DBModel::ContentSaveDB*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_SETCONTENTSAVEDBENTRANCEFEEANDCREATETIME_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean TryParseContentSaveDB(::System::String* str, ::MX::GameLogic::DBModel::ContentSaveDB&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::MX::GameLogic::DBModel::ContentSaveDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_TRYPARSECONTENTSAVEDB_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReduceEnterCost(::System::Int64 arg, ::FlatData::ContentType* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::ContentType*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_REDUCEENTERCOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetEnterMinimumCost(::FlatData::ContentType* arg, ::System::Int64 arg2, ::MX::GameLogic::Parcel::ParcelKeyPair* arg3)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETENTERMINIMUMCOST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::ContentType* ExtractContentSaveType(::System::String* str, ::System::String&* arg)
		{
			return ((::FlatData::ContentType*(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_EXTRACTCONTENTSAVETYPE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* CalcEntranceFeeRefundAmount(::MX::GameLogic::DBModel::ContentSaveDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::ContentSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_CALCENTRANCEFEEREFUNDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetTrimTime(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETTRIMTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidContentSaveDB(::MX::GameLogic::DBModel::ContentSaveDB* arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ContentSaveDB*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_ISVALIDCONTENTSAVEDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetContentStageDataInfo(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSAVEDBSERVICE_GETCONTENTSTAGEDATAINFO_OFFSET))(arg, arg2, nullptr);
		}

	};
}

