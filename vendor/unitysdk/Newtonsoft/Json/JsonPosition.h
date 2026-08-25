#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonContainerType; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_JSONPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9450050)
#define NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET UNITYSDK_OFFSET(0x94500D0)
#define NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET UNITYSDK_OFFSET(0x9450170)
#define NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET UNITYSDK_OFFSET(0x94500C0)
#define NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x94503B0)
#define NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x944FAC0)
#define NEWTONSOFT_JSON_JSONPOSITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9450740)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPosition_TypeDefinitionIndex = 31696;

	class JsonPosition : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SpecialCharacters; // 0x0
		::Newtonsoft::Json::JsonContainerType* Type; // 0x10
		::System::Int32 Position; // 0x14
		::System::String* PropertyName; // 0x18
		::System::Boolean HasIndex; // 0x20

		::System::Void .ctor(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Text::StringBuilder* arg, ::System::IO::StringWriter&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::IO::StringWriter&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TypeHasIndex(::Newtonsoft::Json::JsonContainerType* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* BuildPath(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::String* FormatMessage(::Newtonsoft::Json::IJsonLineInfo* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

