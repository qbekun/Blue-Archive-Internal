#pragma once
#include "unitysdk.h"

#define HTTPAPI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A64CC0)

	inline static constexpr unsigned int HttpApi_TypeDefinitionIndex = 29749;

	class HttpApi : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Strings; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HTTPAPI_.CCTOR_OFFSET))(nullptr);
		}

	};

