#pragma once
#include "unitysdk.h"

#define PARAMINFO_GET_FTYPE_OFFSET UNITYSDK_OFFSET(0x9953690)
#define PARAMINFO_GET_MINARGS_OFFSET UNITYSDK_OFFSET(0x99536A0)
#define PARAMINFO_GET_MAXARGS_OFFSET UNITYSDK_OFFSET(0x99536B0)
#define PARAMINFO_GET_ARGTYPES_OFFSET UNITYSDK_OFFSET(0x99536C0)
#define PARAMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953000)

	inline static constexpr unsigned int ParamInfo_TypeDefinitionIndex = 28314;

	class ParamInfo : public Il2CppObject
	{
	public:
		FunctionType* _ftype; // 0x10
		::System::Int32 _minargs; // 0x14
		::System::Int32 _maxargs; // 0x18
		::Il2CppArray<::System::Object*>* _argTypes; // 0x20

		FunctionType* get_FType()
		{
			return (return (FunctionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMINFO_GET_FTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Minargs()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMINFO_GET_MINARGS_OFFSET))(nullptr);
		}

		::System::Int32 get_Maxargs()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMINFO_GET_MAXARGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ArgTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMINFO_GET_ARGTYPES_OFFSET))(nullptr);
		}

		::System::Void .ctor(FunctionType* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(FunctionType*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

