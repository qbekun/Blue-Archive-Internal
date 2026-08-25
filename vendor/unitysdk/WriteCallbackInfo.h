#pragma once
#include "unitysdk.h"

#define WRITECALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99F6BD0)

	inline static constexpr unsigned int WriteCallbackInfo_TypeDefinitionIndex = 27916;

	class WriteCallbackInfo : public Il2CppObject
	{
	public:
		::System::Type* Type; // 0x10
		::System::String* TypeName; // 0x18
		::System::String* TypeNs; // 0x20
		::System::Xml::Serialization::XmlSerializationWriteCallback* Callback; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WRITECALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};

