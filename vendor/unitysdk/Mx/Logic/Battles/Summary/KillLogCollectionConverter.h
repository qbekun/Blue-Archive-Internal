#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace MX::Logic::Battles::Summary { class KillLogCollection; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x13B0740)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x13B0750)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x13B0760)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B0B10)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x13B0B50)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int KillLogCollectionConverter_TypeDefinitionIndex = 14476;

	class KillLogCollectionConverter : public <OnState>d__5
	{
	public:
		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::MX::Logic::Battles::Summary::KillLogCollection* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::MX::Logic::Battles::Summary::KillLogCollection*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::KillLogCollection* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::MX::Logic::Battles::Summary::KillLogCollection* arg3, ::System::Boolean arg4, ::Newtonsoft::Json::JsonSerializer* arg5)
		{
			return ((::MX::Logic::Battles::Summary::KillLogCollection*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::MX::Logic::Battles::Summary::KillLogCollection*, ::System::Boolean, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTIONCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

