#pragma once
#include "unitysdk.h"

#define UIRECTCHANGEWATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC21AA0)
#define UIRECTCHANGEWATCHER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xC21AB0)

	inline static constexpr unsigned int UIRectChangeWatcher_TypeDefinitionIndex = 8878;

	class UIRectChangeWatcher : public Il2CppObject
	{
	public:
		::System::Action* OnSizeChange; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECTCHANGEWATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECTCHANGEWATCHER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

	};

