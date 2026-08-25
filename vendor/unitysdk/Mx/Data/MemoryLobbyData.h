#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MemoryLobbyExcel&; }
namespace MX::Data::Excel { class MemoryLobbyExcel; }

#define MX_DATA_MEMORYLOBBYDATA_TRYGET_OFFSET UNITYSDK_OFFSET(0x18EE3F0)
#define MX_DATA_MEMORYLOBBYDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x18EE450)
#define MX_DATA_MEMORYLOBBYDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x18EE4A0)
#define MX_DATA_MEMORYLOBBYDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18EE4F0)
#define MX_DATA_MEMORYLOBBYDATA_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x18EEE90)
#define MX_DATA_MEMORYLOBBYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EF0A0)
#define MX_DATA_MEMORYLOBBYDATA_GETLISTBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18EF1C0)
#define MX_DATA_MEMORYLOBBYDATA_GETPREFABNAME_GLOBAL_OFFSET UNITYSDK_OFFSET(0x18EEF70)
#define MX_DATA_MEMORYLOBBYDATA_GET_OFFSET UNITYSDK_OFFSET(0x18ECD50)
#define MX_DATA_MEMORYLOBBYDATA_HASDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18EF210)

namespace MX::Data
{
	inline static constexpr unsigned int MemoryLobbyData_TypeDefinitionIndex = 16176;

	class MemoryLobbyData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x28
		Il2CppObject* sortTable; // 0x30
		Il2CppObject* globalTable; // 0x38

		::System::Boolean TryGet(::System::Int64 arg, ::MX::Data::Excel::MemoryLobbyExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MemoryLobbyExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_GET_IDS_OFFSET))(nullptr);
		}

		::System::Boolean HasData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_HASDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::String* GetPrefabName(::System::Int64 arg, ServerRegion* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Int64, ServerRegion*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_GETPREFABNAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetListByCharacterId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_GETLISTBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetPrefabName_Global(::System::Int64 arg, ServerRegion* arg, ::System::Boolean arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ServerRegion*, ::System::Boolean, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_GETPREFABNAME_GLOBAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::MX::Data::Excel::MemoryLobbyExcel* Get(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::MemoryLobbyExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasDataByCharacterId(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MEMORYLOBBYDATA_HASDATABYCHARACTERID_OFFSET))(arg, nullptr);
		}

	};
}

