#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldActionPlayer; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0xED60C0)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0xED61D0)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xED64A0)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HANDLEFIELDHIDESCREENDISPATCH_OFFSET UNITYSDK_OFFSET(0xED6680)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED67D0)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_UNHIDE_OFFSET UNITYSDK_OFFSET(0xED6710)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HANDLEFIELDLOADINGSCREENDISPATCH_OFFSET UNITYSDK_OFFSET(0xED6880)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_REMOVE_OFFSET UNITYSDK_OFFSET(0xED6A30)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_ADD_OFFSET UNITYSDK_OFFSET(0xED6910)
#define MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xED6B50)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldLoadingScreenHandler_TypeDefinitionIndex = 10948;

	class FieldLoadingScreenHandler : public Il2CppObject
	{
	public:
		Il2CppObject* loadingScreenPredicates; // 0x10
		Il2CppObject* hideScreenPredicates; // 0x18
		::MXField::Actions::FieldActionPlayer* actionPlayer; // 0x20

		::System::Void Hide(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HIDE_OFFSET))(str, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_SUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFieldHideScreenDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HANDLEFIELDHIDESCREENDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Unhide(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_UNHIDE_OFFSET))(str, nullptr);
		}

		::System::Boolean HandleFieldLoadingScreenDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_HANDLEFIELDLOADINGSCREENDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_ADD_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDLOADINGSCREENHANDLER_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

