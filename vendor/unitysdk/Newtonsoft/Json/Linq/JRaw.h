#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JRaw; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JRAW_CREATEASYNC_OFFSET UNITYSDK_OFFSET(0x9509ED0)
#define NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9509FF0)
#define NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET UNITYSDK_OFFSET(0x950A000)
#define NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET UNITYSDK_OFFSET(0x950A010)
#define NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET UNITYSDK_OFFSET(0x950A020)
#define NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x950A3B0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JRaw_TypeDefinitionIndex = 32037;

	class JRaw : public Il2CppObject
	{
	public:
		Il2CppObject* CreateAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CREATEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JRaw* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JRaw*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JRaw* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JRaw*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JRaw*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET))(arg, nullptr);
		}

	};
}

