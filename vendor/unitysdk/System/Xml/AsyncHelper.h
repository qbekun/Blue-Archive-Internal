#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_ASYNCHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x983DDF0)

namespace System::Xml
{
	inline static constexpr unsigned int AsyncHelper_TypeDefinitionIndex = 27606;

	class AsyncHelper : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* DoneTask; // 0x0
		Il2CppObject* DoneTaskTrue; // 0x8
		Il2CppObject* DoneTaskFalse; // 0x10
		Il2CppObject* DoneTaskZero; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ASYNCHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

