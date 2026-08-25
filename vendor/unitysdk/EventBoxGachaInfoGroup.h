#pragma once
#include "unitysdk.h"

#define EVENTBOXGACHAINFOGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x247C9E0)

	inline static constexpr unsigned int EventBoxGachaInfoGroup_TypeDefinitionIndex = 5670;

	class EventBoxGachaInfoGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ShopInfos; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHAINFOGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

