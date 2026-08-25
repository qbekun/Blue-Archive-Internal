#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::Data { class ProtocolSetting&; }

#define MX_DATA_PROTOCOLSETTINGDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x1926B50)
#define MX_DATA_PROTOCOLSETTINGDATA_TRYGET_OFFSET UNITYSDK_OFFSET(0x1926DD0)
#define MX_DATA_PROTOCOLSETTINGDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x1926E30)
#define MX_DATA_PROTOCOLSETTINGDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x1926E80)
#define MX_DATA_PROTOCOLSETTINGDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1926E90)
#define MX_DATA_PROTOCOLSETTINGDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1926EA0)
#define MX_DATA_PROTOCOLSETTINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1926EB0)

namespace MX::Data
{
	inline static constexpr unsigned int ProtocolSettingData_TypeDefinitionIndex = 16306;

	class ProtocolSettingData : public Il2CppObject
	{
	public:
		Il2CppObject* dictionary; // 0x18

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGet(::MX::NetworkProtocol::Protocol* arg, ::MX::Data::ProtocolSetting&* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::MX::Data::ProtocolSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTINGDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

