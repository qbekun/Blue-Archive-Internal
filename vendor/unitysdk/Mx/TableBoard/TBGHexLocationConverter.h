#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }

#define MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0xF09810)
#define MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0xF099B0)
#define MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0xF09A00)
#define MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xF09AB0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexLocationConverter_TypeDefinitionIndex = 11208;

	class TBGHexLocationConverter : public <>c
	{
	public:
		::MX::Campaign::HexLocation* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::MX::Campaign::HexLocation* arg3, ::System::Boolean arg4, ::Newtonsoft::Json::JsonSerializer* arg5)
		{
			return ((::MX::Campaign::HexLocation*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::MX::Campaign::HexLocation*, ::System::Boolean, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::MX::Campaign::HexLocation* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::MX::Campaign::HexLocation*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ConvertTo(::MX::Campaign::HexLocation* arg)
		{
			return ((::System::String*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_CONVERTTO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXLOCATIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

