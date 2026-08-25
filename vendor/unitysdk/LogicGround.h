#pragma once
#include "unitysdk.h"

#define LOGICGROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E780)

	inline static constexpr unsigned int LogicGround_TypeDefinitionIndex = 3382;

	class LogicGround : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Sections; // 0x18
		::System::String* _loadedGround; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICGROUND_.CTOR_OFFSET))(nullptr);
		}

	};

