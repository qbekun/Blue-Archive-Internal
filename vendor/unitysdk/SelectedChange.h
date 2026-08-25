#pragma once
#include "unitysdk.h"

#define SELECTEDCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA1730)
#define SELECTEDCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1800)
#define SELECTEDCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1810)
#define SELECTEDCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1880)

	inline static constexpr unsigned int SelectedChange_TypeDefinitionIndex = 26345;

	class SelectedChange : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDCHANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDCHANGE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDCHANGE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDCHANGE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

