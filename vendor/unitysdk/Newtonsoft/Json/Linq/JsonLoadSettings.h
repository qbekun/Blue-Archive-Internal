#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class CommentHandling; }
namespace Newtonsoft::Json::Linq { class LineInfoHandling; }
namespace Newtonsoft::Json::Linq { class DuplicatePropertyNameHandling; }

#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x950AC30)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_COMMENTHANDLING_OFFSET UNITYSDK_OFFSET(0x950AC60)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_COMMENTHANDLING_OFFSET UNITYSDK_OFFSET(0x950AC70)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_LINEINFOHANDLING_OFFSET UNITYSDK_OFFSET(0x950ACE0)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_LINEINFOHANDLING_OFFSET UNITYSDK_OFFSET(0x950ACF0)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_DUPLICATEPROPERTYNAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x950AD60)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_DUPLICATEPROPERTYNAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x950AD70)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonLoadSettings_TypeDefinitionIndex = 32039;

	class JsonLoadSettings : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::CommentHandling* _commentHandling; // 0x10
		::Newtonsoft::Json::Linq::LineInfoHandling* _lineInfoHandling; // 0x14
		::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* _duplicatePropertyNameHandling; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::CommentHandling* get_CommentHandling()
		{
			return (return (::Newtonsoft::Json::Linq::CommentHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_COMMENTHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_CommentHandling(::Newtonsoft::Json::Linq::CommentHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::CommentHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_COMMENTHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::LineInfoHandling* get_LineInfoHandling()
		{
			return (return (::Newtonsoft::Json::Linq::LineInfoHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_LINEINFOHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_LineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::LineInfoHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_LINEINFOHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* get_DuplicatePropertyNameHandling()
		{
			return (return (::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_DUPLICATEPROPERTYNAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DuplicatePropertyNameHandling(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_SET_DUPLICATEPROPERTYNAMEHANDLING_OFFSET))(arg, nullptr);
		}

	};
}

