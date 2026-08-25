#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int IRemotingTypeInfo_TypeDefinitionIndex = 24434;

	class IRemotingTypeInfo : public Il2CppObject
	{
	public:
		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean CanCastTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_CANCASTTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

