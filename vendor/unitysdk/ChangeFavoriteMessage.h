#pragma once
#include "unitysdk.h"

#define CHANGEFAVORITEMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F22240)
#define CHANGEFAVORITEMESSAGE_SET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0x1F22250)
#define CHANGEFAVORITEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F22260)
#define CHANGEFAVORITEMESSAGE_GET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0x1F22290)
#define CHANGEFAVORITEMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F222A0)

	inline static constexpr unsigned int ChangeFavoriteMessage_TypeDefinitionIndex = 2141;

	class ChangeFavoriteMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18
		::System::Boolean _IsFavorite_k__BackingField; // 0x20

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEFAVORITEMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFavorite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEFAVORITEMESSAGE_SET_ISFAVORITE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEFAVORITEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsFavorite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEFAVORITEMESSAGE_GET_ISFAVORITE_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEFAVORITEMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

	};

