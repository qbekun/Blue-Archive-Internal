#pragma once
#include "unitysdk.h"

#define MESSAGEBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB3580)

	inline static constexpr unsigned int MessageBox_TypeDefinitionIndex = 33973;

	class MessageBox : public Il2CppObject
	{
	public:
		Style* style; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEBOX_.CTOR_OFFSET))(nullptr);
		}

	};

