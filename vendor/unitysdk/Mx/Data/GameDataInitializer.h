#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class DataExecutionOptions; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::AssetBundles { class PatchOption; }

#define MX_DATA_GAMEDATAINITIALIZER_CREATELOADDATAFROMASSETTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_GAMEDATAINITIALIZER_LOADTABLEDATAFORTOOL_OFFSET UNITYSDK_OFFSET(0x17FD490)
#define MX_DATA_GAMEDATAINITIALIZER_LOADTABLEDATA_OFFSET UNITYSDK_OFFSET(0x18020F0)
#define MX_DATA_GAMEDATAINITIALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1802250)
#define MX_DATA_GAMEDATAINITIALIZER_RUN_OFFSET UNITYSDK_OFFSET(0x1802260)
#define MX_DATA_GAMEDATAINITIALIZER_LOADINBATCHES_OFFSET UNITYSDK_OFFSET(0x1802450)
#define MX_DATA_GAMEDATAINITIALIZER_INITIALIZETABLE_OFFSET UNITYSDK_OFFSET(0x18025B0)
#define MX_DATA_GAMEDATAINITIALIZER_CLEARREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1802640)
#define MX_DATA_GAMEDATAINITIALIZER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1802B50)
#define MX_DATA_GAMEDATAINITIALIZER_CREATELOADTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_GAMEDATAINITIALIZER_GETTABLEDATAS_OFFSET UNITYSDK_OFFSET(0x17FDC10)
#define MX_DATA_GAMEDATAINITIALIZER_INITINBUILDDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x1802DB0)
#define MX_DATA_GAMEDATAINITIALIZER_INITIALIZESERVERINFODATA_OFFSET UNITYSDK_OFFSET(0x17FDA50)
#define MX_DATA_GAMEDATAINITIALIZER_RUNINBATCHES_OFFSET UNITYSDK_OFFSET(0x1803320)
#define MX_DATA_GAMEDATAINITIALIZER_ISVALIDCANCELLATIONTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1802BE0)

namespace MX::Data
{
	inline static constexpr unsigned int GameDataInitializer_TypeDefinitionIndex = 15689;

	class GameDataInitializer : public Il2CppObject
	{
	public:
		::MX::Data::DataExecutionOptions* options; // 0x0

		Il2CppObject* CreateLoadDataFromAssetTask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_CREATELOADDATAFROMASSETTASK_OFFSET))(nullptr);
		}

		::System::Void LoadTableDataForTool(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_LOADTABLEDATAFORTOOL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LoadTableData()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_LOADTABLEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LoadInBatches()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_LOADINBATCHES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitializeTable(::MX::AssetBundles::PatchOption* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::AssetBundles::PatchOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_INITIALIZETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearRepository()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_CLEARREPOSITORY_OFFSET))(nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_INTERRUPT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLoadTask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_CREATELOADTASK_OFFSET))(nullptr);
		}

		Il2CppObject* GetTableDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_GETTABLEDATAS_OFFSET))(nullptr);
		}

		::System::Void InitInBuildDataManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_INITINBUILDDATAMANAGER_OFFSET))(nullptr);
		}

		::System::Void InitializeServerInfoData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_INITIALIZESERVERINFODATA_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RunInBatches(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_RUNINBATCHES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidCancellationTokenSource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GAMEDATAINITIALIZER_ISVALIDCANCELLATIONTOKENSOURCE_OFFSET))(nullptr);
		}

	};
}

