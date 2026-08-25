#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA63C0)
#define SHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA6450)
#define SHOPLISTNETWORKTASK_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1FA6460)
#define SHOPLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6470)
#define SHOPLISTNETWORKTASK_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1FA6480)
#define SHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA6490)
#define SHOPLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FA6640)

	inline static constexpr unsigned int ShopListNetworkTask_TypeDefinitionIndex = 2834;

	class ShopListNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _Category_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Category()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Category(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

