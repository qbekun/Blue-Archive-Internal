#pragma once
#include "unitysdk.h"

#define HANDLEELEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int HandleElem_TypeDefinitionIndex = 32833;

	class HandleElem : public Il2CppObject
	{
	public:
		Il2CppObject* _key; // 0x0
		::System::Int32 _node; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANDLEELEM_.CTOR_OFFSET))(nullptr);
		}

	};

