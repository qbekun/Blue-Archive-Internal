#pragma once
#include "unitysdk.h"

class ContentBlockType;

#define CONTENTBLOCKSERVICE_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x1FC2C80)
#define CONTENTBLOCKSERVICE_OPENBLOCKPOPUP_OFFSET UNITYSDK_OFFSET(0x1FC2C90)

	inline static constexpr unsigned int ContentBlockService_TypeDefinitionIndex = 2955;

	class ContentBlockService : public Il2CppObject
	{
	public:
		::System::Boolean IsBlock(ContentBlockType* arg)
		{
			return ((::System::Boolean(*)(ContentBlockType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTBLOCKSERVICE_ISBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void OpenBlockPopup(ContentBlockType* arg, ::System::String* str)
		{
			((::System::Void(*)(ContentBlockType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTBLOCKSERVICE_OPENBLOCKPOPUP_OFFSET))(arg, str, nullptr);
		}

	};

