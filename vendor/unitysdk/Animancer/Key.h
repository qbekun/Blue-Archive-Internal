#pragma once
#include "../unitysdk.h"

namespace Animancer { class Key; }

#define ANIMANCER_KEY_ANIMANCER.KEY.ILISTITEM.GET_KEY_OFFSET UNITYSDK_OFFSET(0x48E220)
#define ANIMANCER_KEY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x48E230)
#define ANIMANCER_KEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x48E250)
#define ANIMANCER_KEY_ISINLIST_OFFSET UNITYSDK_OFFSET(0x48E260)

namespace Animancer
{
	inline static constexpr unsigned int Key_TypeDefinitionIndex = 35089;

	class Key : public Il2CppObject
	{
	public:
		::System::Int32 NotInList; // 0x0
		::System::Int32 _Index; // 0x10

		::Animancer::Key* Animancer.Key.IListItem.get_Key()
		{
			return (return (::Animancer::Key*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_KEY_ANIMANCER.KEY.ILISTITEM.GET_KEY_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::Animancer::Key* arg)
		{
			return (return (::System::Int32(*)(::Animancer::Key*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_KEY_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_KEY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsInList(::Animancer::Key* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::Key*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_KEY_ISINLIST_OFFSET))(arg, nullptr);
		}

	};
}

