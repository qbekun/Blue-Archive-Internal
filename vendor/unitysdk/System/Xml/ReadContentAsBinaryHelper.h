#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_READCONTENTASBINARYHELPER_FINISH_OFFSET UNITYSDK_OFFSET(0x9959CF0)
#define SYSTEM_XML_READCONTENTASBINARYHELPER_RESET_OFFSET UNITYSDK_OFFSET(0x9959FD0)
#define SYSTEM_XML_READCONTENTASBINARYHELPER_MOVETONEXTCONTENTNODE_OFFSET UNITYSDK_OFFSET(0x9959E40)

namespace System::Xml
{
	inline static constexpr unsigned int ReadContentAsBinaryHelper_TypeDefinitionIndex = 27654;

	class ReadContentAsBinaryHelper : public Il2CppObject
	{
	public:
		::System::Xml::XmlReader* reader; // 0x10
		State* state; // 0x18
		::System::Int32 valueOffset; // 0x1C
		::System::Boolean isEnd; // 0x20

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_FINISH_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextContentNode(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_MOVETONEXTCONTENTNODE_OFFSET))(arg, nullptr);
		}

	};
}

