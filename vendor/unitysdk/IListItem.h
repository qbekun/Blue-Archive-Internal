#pragma once
#include "unitysdk.h"

namespace Animancer { class Key; }

#define ILISTITEM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IListItem_TypeDefinitionIndex = 35087;

	class IListItem : public Il2CppObject
	{
	public:
		::Animancer::Key* get_Key()
		{
			return (return (::Animancer::Key*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTITEM_GET_KEY_OFFSET))(nullptr);
		}

	};

